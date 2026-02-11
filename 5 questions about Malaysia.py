#!/usr/bin/env python3

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
    answer = input("Since 2013 , the minimum requirement to get a SPM certificate is passing two mandatory subjects . Name the two subjects fully.").strip().lower()
    print(answer)

    if "bahasa melayu" in answer and "sejarah" in answer:
         print("Good job!")
    else:
            print("Aww , it's wrong :(")
            answer = input("Try again :")
            print(answer)

            if "bahasa melayu" in answer and "sejarah" in answer:
                 print("Good job!")
            else:
                 print("Too bad...")
                 exit()

question_4()

def question_5():
    answer = input("In Kuala Lumpur , there are 2 aerodrome airports that are active . List the districts located for the 2 airports without including the word district in your answer").strip().lower()
    print(answer)

    if "sepang" in answer and "petaling" in answer:
        print("Good job!")
    else:
        print("Aww , try again :(")
        answer = input("Try again :")
        print(answer)

        if "sepang" in answer and "petaling" in answer:
            print("Good job!")
        else:
            print("Too bad...")
            exit()
        
question_5()







































