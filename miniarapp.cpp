/*

    Miniara++ (Miniarapp.cpp) v.1.0

    Created by Arturo Olivares on 9/7/2022.
    Copyright © 2022 Arturo Olivares. All rights reserved.

    ================================================================================
    Grammar with ambiguities (not programmable)
    ================================================================================
    <MNote> ::= <pitch> <duration>
    <pitch> ::= <notename> <octave> | <rest>
    <notename> ::= <letter> | <letter> <accidental>
    <letter> ::= "A" | "B" | "C" | "D" | "E" | "F" | "G"
    <accidental> ::= <sharp> | <flat>
    <flat> ::= "b" | "b" <flat>
    <sharp> ::= "#" | "#" <sharp>
    <rest> ::= "R"
    <octave> ::= "-2" | "-1" | "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8"
    <duration> ::= <tval> | <tval> <tmod>
    <tval> ::= "w" | "h" | "q" | "e" | "s" | "t" | "f"
    <tmod> ::= <dot> | <let>
    <dot> ::= "." | "." <dot>
    <let> ::= "t" | "3" | "5" | "7" | "9"

    ================================================================================
    Grammar without ambiguities (programmable)
    ================================================================================
    <MNote> ::= <pitch> <duration>
    <pitch> ::= <notename> <octave> | <rest>
    <notename> ::= <letter> | <letter> <accidental>
    <letter> ::= "A" | "B" | "C" | "D" | "E" | "F" | "G"
    <accidental> ::= <sharp> | <flat>
    <flat> ::= "b" <flat1>
    <flat1> ::= <flat> | epsilon 
    <sharp> ::= "#" <sharp1>
    <sharp1> ::= <sharp> | epsilon 
    <rest> ::= "R"
    <octave> ::= "-2" | "-1" | "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8"
    <duration> ::= <tval> | <tval> <tmod>
    <tval> ::= "w" | "h" | "q" | "e" | "s" | "t" | "f"
    <tmod> ::= <dot> | <let>
    <dot> ::= "." <dot1>
    <dot1> ::= <dot> | epsilon 
    <let> ::= "t" | "3" | "5" | "7" | "9"

*/

#include <iostream>
#include <conio.h>
using namespace std;

char t;

void MNote();
void pitch();
void notename();
void letter();
void accidental();
void flat();
void flat1();
void sharp();
void sharp1();
void rest();
void octave();
void duration();
void tval();
void tmod();
void dot();
void dot1();
void let();

void MNote(){
    pitch();
    duration();
}

void pitch(){
    if (t == 'A' | t == 'B' | t == 'C' | t == 'D' | t == 'E' | t == 'F' | t == 'G'){ 
        notename();
        octave();
	}else if(t == 'R'){
        rest();
    }else{
        cout << "\n[SyntaxError]: Expected a letter [A-G] or a rest 'R'\n";
		exit(0);
    }
}

void notename(){
    if (t == 'A' | t == 'B' | t == 'C' | t == 'D' | t == 'E' | t == 'F' | t == 'G'){ 
        letter();
        if(t=='#'|| t=='b'){
            accidental();
        }
	}
    else{
        cout << "\n[SyntaxError]: Expected a letter [A-G]" << endl;
		exit(0);
    }
}

void letter(){
    if (t == 'A' || t == 'B' || t == 'C' || t == 'D' || t == 'E' || t == 'F' || t == 'G'){ 
		t = getch();
		cout << t;
	}
    else
	{
		cout << "\n[SyntaxError]: Expected a letter [A-G]" << endl;
		exit(0);
	}
}

void accidental(){
    if (t == '#'){
        sharp();
	}
    else if (t == 'b'){
        flat();
    }
    else
	{
		cout << "\n[SyntaxError]: Expected an accidental ('#' or 'b')\n";
		exit(0);
	}
}

void flat(){
    if (t == 'b'){
		t = getch();
		cout << t;
        flat1();
	}
    else
	{
		cout << "\n[SyntaxError]: Expected a flat 'b'\n";
		exit(0);
	}
}

void flat1(){
    if (t == 'b'){
        flat();
	}
}

void sharp(){
    if (t == '#'){
		t = getch();
		cout << t;
        sharp1();
	}
    else
	{
		cout << "\n[SyntaxError]: Expected a flat 'b'\n";
		exit(0);
	}
}

void sharp1(){
    if (t == '#'){
        sharp();
	}
}

void rest(){
    if (t == 'R'){
		t = getch();
		cout << t;
	}else{
        cout << "\n[SyntaxError]: Expected a rest 'R'" << endl;
		exit(0);
    }
}

void octave(){
    if (t == '0' || t == '1' || t == '2' || t == '3' || t == '4' || t == '5' || t == '6' || t == '7' || t == '8'){ 
		t = getch();
		cout << t;
	}
    else if(t == '-'){
        t = getch();
        cout << t;
        if (t == '2' || t == '1' ){
            t = getch();
            cout << t;
        }else{
		    cout << "\n[SyntaxError]: Expected octave ('-2' or '-1')" << endl;
		    exit(0);
        }
    }
    else
	{
		cout << "\n[SyntaxError]: Expected an octave ( '-2'-'8')";
        cout << " or accidental ('#' or 'b')\n";
		exit(0);
	}
}

void duration(){
    if (t == 'w' || t == 'h' || t == 'q' || t == 'e' || t == 's' || t == 't' || t == 'f'){ 
        tval();
        if((t == 't' || t == '3' || t == '5' || t == '7' || t == '9') || (t == '.')){
            tmod();
        }
	}
    else{
        cout << "\n[SyntaxError]: Expected a tval ('w', 'h', 'q', 'e', 's', 't', or 'f')" << endl;
		exit(0);
    }
}

void tval(){
    if (t == 'w' || t == 'h' || t == 'q' || t == 'e' || t == 's' || t == 't' || t == 'f'){ 
		t = getch();
		cout << t;
	}
    else
	{
		cout << "\n[SyntaxError]: Expected a tval ('w', 'h', 'q', 'e', 's', 't', or 'f')" << endl;
		exit(0);
	}
}

void tmod(){
    if (t == '.'){ 
        dot();
	}
    else if (t == 't' || t == '3' || t == '5' || t == '7' || t == '9'){
        let();
    }
    else
	{
		cout << "\n[SyntaxError]: Expected a dot '.'";
        cout << " or let ('t', '3', '5', '7', or '9')\n";
		exit(0);
	}
}

void dot(){
    if (t == '.'){
		t = getch();
		cout << t;
        dot1();
	}
    else
	{
		cout << "\n[SyntaxError]: Expected a dot '.'\n";
		exit(0);
	}
}

void dot1(){
    if (t == '.'){
        dot();
	}
}


void let(){
    if (t == 't' || t == '3' || t == '5' || t == '7' || t == '9'){ 
		t = getch();
		cout << t;
	}
    else
	{
		cout << "\n[SyntaxError]: Expected a let ('t', '3', '5', '7', or '9')\n";
		exit(0);
	}
}


int main(){
    while (true){
        t = getch();
        cout << t;
        MNote();
        if (t == 13)
            cout << "\nValid MUT note\n";
        else
            cout << "\nInvalid MUT note\n";
    }
    return 0;
}
