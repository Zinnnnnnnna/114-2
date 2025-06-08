#ifndef LOAN_H
#define LOAN_H

class Loan {
private:
    double yearrate;  //年利率
    int number;  //年數
    double money;  //貸款金額
    int graceperiod;

public:
    // 建構子
    Loan();
    Loan(double rate, int years, double amount);

    // 存取函式（Getter）
    double getYearrate() const;
    int getNumber() const;
    double getMoney() const;
	int getGraceperiod() const;

    // 修改函式（Setter）
    void setYearrate(double rate);
    void setNumber(int years);
    void setMoney(double money);
	void setGraceperiod(int g);

    // 功能函式
    double getMonthpay() const;  //每月需付金額
    double getGraceperiodpayin()const;  //寬限期內需付金額
	double getGraceperiodpayout()const;  //寬限期後需付金額
};
#endif
