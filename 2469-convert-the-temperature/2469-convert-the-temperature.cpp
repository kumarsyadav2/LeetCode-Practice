class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>answer;
        double k = celsius + 273.15;
        double f = celsius * 1.80 + 32.00;
        answer.push_back(k);
        answer.push_back(f);
        return answer;
    }
};