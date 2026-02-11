#!/usr/bin/env python3

print("You will be participating on a short 5 questions quiz about the general knowledge of Malaysia . You will only have 2 chances per question . After 2 chances , the program will exit automatically and you may try again after. Please say the word 'yes' or 'no' in order to continue.")
answer = str(input()).strip().lower()
    
if answer == "yes":
        print("Let's go!")
else: 
        exit()

def question_1():

    answer = input("What is the capital city of Malaysia? ").strip().lower()
    print(answer)

    if answer == "kuala lumpur":
        print("Good job!")
    else:
        print("Aww, it's wrong :(")
        answer = input("Try again: ").strip().lower()
        print(answer)

        if answer == "kuala lumpur":
            print("Good job!")
        else:
            print("Too bad...")
            exit()

question_1()

def question_2():
    answer = input("What is the national food in Malaysia?").strip().lower()
    print(answer)

    if answer == "nasi lemak":
        print("Good job!")
    else:
        print("Aww , it's wrong :(")
        answer = input("Try again: ").strip().lower()
        print(answer)

        if answer == "nasi lemak":
            print("Good job!")
        else:
            print("Too bad...")
            exit()

question_2()

def question_3():
    answer = input("What is the name of the national anthem in Malaysia?").strip().lower()
    print(answer)

    if answer == "negaraku":
        print("Good job!")
    else:
        print("Aww , it's wrong :(")
        answer = input("Try again : ").strip().lower()
        print(answer)

        if answer == "negaraku":
            print("Good job!")
        else:
            print("Too bad...")
            exit()

question_3()

def question_4():
    answer = input("Since 2013 , the minimum requirement to get a SPM (Malaysia high school exit examination) certificate is to pass two mandatory subjects . Name the two subjects fully.").strip().lower()
    print(answer)

    if "bahasa melayu" in answer and "sejarah" in answer:
         print("Good job!")
    else:
            print("Aww , it's wrong :(")
            answer = input("Try again :").strip().lower()
            print(answer)

            if "bahasa melayu" in answer and "sejarah" in answer:
                 print("Good job!")
            else:
                 print("Too bad...")
                 exit()

question_4()

def question_5():
    answer = input("In the Klang Valley , there are 2 main airports that are active . List the administrative districts located for the 2 airports").strip().lower()
    print(answer)

    if "sepang" in answer and "petaling" in answer:
        print("Good job!")
    else:
        print("Aww , try again :(")
        answer = input("Try again :").strip().lower()
        print(answer)

        if "sepang" in answer and "petaling" in answer:
            print("Good job!")
        else:
            print("Too bad...")
            exit()
        
question_5()

def end_sequence():
    print("Congrats, you really have the knowledge to do this!")
    redo = input("Do you wish to try again? ").strip().lower()
    
    if redo == "yes":
        print("Starting over from Question 1...")
        return True 
    else:
        print("Goodbye!")
        exit()

end_sequence()

while True:
    question_1()
    question_2()
    question_3()
    question_4()
    question_5()
        
    end_sequence() 




































