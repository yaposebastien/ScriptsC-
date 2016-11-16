
#!/bin/bash

#This script bash was built in order to allow people who do not have access to internet to receive through sms healthy corner stores near to their location. this work was inspired by the code of Giuseppe Gangi (@ggangix).

breakTime=15 #This variable allows gammu-smsd-inject to wait 15s before sending the next line of the request.
decompte=1

#Checking for sms which contains the statuts "UnRead" and creating those following files partofnew.sms
gammu --getallsms | head -n 9 > partofnew.sms
status=$(grep -i "UnRead" partofnew.sms | cut -f2 -d : | cut -f2 -d " ")
keyword=$(grep -i "Healthy" partofnew.sms | cut -f1 -d " ")

if [ "$status" = "UnRead" ] && [ "$keyword" = "Healthy" ] 
then

	#This variable $sendernumber catches the phone number of an user from the file
	sendernumber=$(grep -i "Remote" partofnew.sms | cut -f2 -d: | cut -c 3-14)
	#Displays that phone number
	echo "The sender et destination number is : $sendernumber"
	#This variable retrieves the keyword entered from the database e.g sms (Healthy 19123 or Healthy Wayne)
	zipcode=$(grep -i "Healthy" partofnew.sms | cut -f2 -d" ")
	echo "Healthy stores for Zip code : $zipcode"

	#Filter the dataset in order to find corner store corresponding to request.
	grep -i "$zipcode" Healthy_Corner_Stores.txt >  Filter_Dataset.sms
	#Count the number of results corresponding to Zipcode or special request	
	numberLines=$(wc -l < Filter_Dataset.sms) 


#Start processing

echo "Total stores found for keyword $zipcode is : $numberLines"

gammu --sendsms TEXT $sendernumber -text "@Neargreen found $numberLines healthy corner stores near to $zipcode ..." 
	while read line
	do
	echo "-----             Records           -----"
	echo "$line"
	echo "------------------------------------------------------------"
	echo "Sending sms number $decompte of $numberLines for request $zipcode ...."
	gammu --sendsms TEXT $sendernumber -text "$line" 
		for a in `seq 1 $breakTime`;
		do
		echo -n "$a..."
		sleep 1;
		done
	decompte=$((decompte+1))
	done < Filter_Dataset.sms
gammu --sendsms TEXT $sendernumber -text "Thanks! Stay healthy with Neargreen."

#For statistic purpose, saving Date&Hour,SenderNumber and request in ProcessedRequest.data
date=$(date)
echo "$(date),$sendernumber,$zipcode,"Processed"" >> ProcessedRequest.data

#This block checks if the text message doesn't contain Healthy and sends a failure response to the user.
elif [ "$keyword" != "Healthy" ] && [ "$status" = "UnRead" ]
then
sendernumber=$(grep -i "Remote" partofnew.sms | cut -f2 -d: | cut -c 3-14)
gammu --sendsms TEXT $sendernumber -text "Sorry! @Neargreen could not process your request."
echo "$(date),$sendernumber,$zipcode,"Failed"" >> ProcessedRequest.data
else
echo "There is no new request yet"
fi
exit 0

