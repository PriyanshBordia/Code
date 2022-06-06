class Solution {
public:
    string intToRoman(int num) {
     
        if (num / 1000 > 0)
            return string(num / 1000, 'M') + intToRoman(num % 1000);
        
        if (num / 900 > 0)
            return "CM" + intToRoman(num % 900);
        
        if (num / 500 > 0)            
            return string(num / 500, 'D') + intToRoman(num % 500);
        
        if (num / 400 > 0)
            return "CD" + intToRoman(num % 400);
        
        if (num / 100 > 0)
            return string(num / 100, 'C') + intToRoman(num % 100);
        
        if (num / 90 > 0)
            return "XC" + intToRoman(num % 90);
        
        if (num / 50 > 0)
            return string(num / 50, 'L') + intToRoman(num % 50);
        
        if (num / 40 > 0)
            return "XL" + intToRoman(num % 40);
        
        if (num / 10 > 0)
            return string(num / 10, 'X') + intToRoman(num % 10);
        
        if (num == 9)
            return "IX";
                
        if (num / 5 > 0)
            return string(num / 5, 'V') + intToRoman(num % 5);
        
        if (num == 4)
            return "IV";
        
        if (num >= 1)
            return string(num, 'I');
        
        return "";
    }
};
