using System;
public static class RomanNumeralExtension{
    public static string ToRoman(this int value){
        string roman = string.Empty;
        string[] RomanNumber = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int[] ArabicNumber = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
        for(int i = 0; value > 0; i++){
            if (value >= ArabicNumber[i]){
                value -= ArabicNumber[i];
                roman += RomanNumber[i];
                i--;
            }
        }
        return roman;
    }
}