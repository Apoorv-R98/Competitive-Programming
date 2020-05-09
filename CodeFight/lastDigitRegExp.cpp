// Given a string with at least one digit, extract the rightmost digit from it.

// Example

// For inputString = "var_1__Int", the output should be
// lastDigitRegExp(inputString) = '1';
// For inputString = "qq2q", the output should be
// lastDigitRegExp(inputString) = '2';
// For inputString = "0ss", the output should be
// lastDigitRegExp(inputString) = '0'.

char lastDigitRegExp(std::string inputString) {
    for(int i=inputString.size();i>=0;i--){
        if(inputString[i]>='0' && inputString[i]<='9'){
            return inputString[i];
        }
    }
}
