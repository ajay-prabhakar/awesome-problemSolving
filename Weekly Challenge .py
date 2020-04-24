import requests
import gspread
from oauth2client.service_account import ServiceAccountCredentials
given='58A'
Solved_people=[]
Attempted_people=[]
Unattempted_people=[]


name={
"ananthanAN2k":"K.N.Anantha nandanan",
"robustTechie":"Shashank Priyadarshi",
"ahv15":"A. Harshit Varma",
"ashwinkey04":"Ashwin R",
"akymaster007":"Akshay V",
"sanjananayar2k1":"Sanjana Nayar",
"kasthuri_nair":"Kasthuri A S Nair",
"sassycode":"Sashmita Raghav",
"insaiyancvk":"C Vamshi Krishna",
"Riddhi_menon":"Riddhi Menon",
"Xacker11":"Akshay Praveen Nair",	
"mayukhmainak2000":"Mayukh Deb",
"fudgepuppy":"Karan Lohaan",
"akshayhari":"Akshay Hari",
"bhargav7":"Bhargav Inturi",
"adiaux10":"Aditya anil",
"NehalNevle":"Nehal Nevle"
}
for w in name.keys():
    string="https://codeforces.com/api/user.status?handle="+w+"&from=1"
    response=requests.get(string)
    x=response.json()['result']
    attempted=False
    accepted=False
    Handle=w
    for i in range(len(x)):
        d=x[i]['problem']
        if('contestId' in d.keys()):
            required=str(d['contestId'])+d['index']
            verdict=x[i]['verdict']
            if(required==given):
                attempted=True
                if(verdict=='OK'):
                    Solved_people.append(name[Handle])
                    accepted=True
                    break
    if(not(accepted) and attempted):
        Attempted_people.append(name[Handle])
    if(not(attempted)):
        Unattempted_people.append(name[Handle])
print(*Solved_people)
name={
"chromicle":"Ajay Prabhakar",
"Harshithpabbati":"Harshith Pabbati",
"abhijitramesh2k":"Abhijit Ramesh",
"drishya_8":"Drishya Ramesh",
"swathi_kasikala":"Swathi Kasikala",
"stormborn":"Athira Nair K",
"puneeth_chanda":"Puneeth Chanda",
"gsanthosh":"Gautham Santhosh",
"akhilam512":"Akhil K G",
"gopika":"Gopika H",
"qwerty2k":"Yash Khare",
"Sri_lohitha_bhagam":"Lohitha",
"Anand1729":"Anand H",
"vaishnavs":"Vaishnav S",
"SAforce":"Shivangi",
"sevagen123":"Veerasamy S",
"Xerous":"T. Vishwaak Chandran",
"sherlock07":"Laasya"
}
for w in name.keys():
    string="https://codeforces.com/api/user.status?handle="+w+"&from=1"
    response=requests.get(string)
    x=response.json()['result']
    attempted=False
    accepted=False
    Handle=w
    for i in range(len(x)):
        d=x[i]['problem']
        if('contestId' in d.keys()):
            required=str(d['contestId'])+d['index']
            verdict=x[i]['verdict']
            if(required==given):
                attempted=True
                if(verdict=='OK'):
                    Solved_people.append(name[Handle])
                    accepted=True
                    break
    if(not(accepted) and attempted):
        Attempted_people.append(name[Handle])
    if(not(attempted)):
        Unattempted_people.append(name[Handle])

name={
"marcos_16":"C. Anirudh",
"immadisairaj":"Sai Rajendra Immadi",
"gopavasanth":"Gopa Vasanth",
"manikishan":"Manikishan",
"abhishekbvs":"Abhishek Bvs",
"bhanuprakashp":"Bhanu Prakash"
}
for w in name.keys():
    string="https://codeforces.com/api/user.status?handle="+w+"&from=1"
    response=requests.get(string)
    x=response.json()['result']
    attempted=False
    accepted=False
    Handle=w
    for i in range(len(x)):
        d=x[i]['problem']
        if('contestId' in d.keys()):
            required=str(d['contestId'])+d['index']
            verdict=x[i]['verdict']
            if(required==given):
                attempted=True
                if(verdict=='OK'):
                    Solved_people.append(name[Handle])
                    accepted=True
                    break
    if(not(accepted) and attempted):
        Attempted_people.append(name[Handle])
    if(not(attempted)):
        Unattempted_people.append(name[Handle])
print("People Who Solved")
print("=========================")
for i in Solved_people:
    print(i)
print()
print("People Who Attempted")
print("=========================")
for i in Attempted_people:
    print(i)
print()
print("People Who did not Attempt")
print("=========================")
for i in Unattempted_people:
    print(i)
