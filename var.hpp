#pragma once

struct var {
    enum {
        number,
        string,
    } type;

    union {
        double num = 0;
        void *str;
    };

    var() = default;
    var(var &&);
    var(const var &);
    var &operator=(var &&);
    var &operator=(const var &);

    var(double);
    var(const char *);
    ~var();

    var operator+() const;
    var operator-() const;

    var &operator++();
    var &operator--();
    var operator++(int);
    var operator--(int);

    var operator+(const var &) const;
    var operator-(const var &) const;
    var operator*(const var &) const;
    var operator/(const var &) const;
    var operator%(const var &) const;
    var &operator+=(const var &);
    var &operator-=(const var &);
    var &operator*=(const var &);
    var &operator/=(const var &);
    var &operator%=(const var &);

    var operator~() const;
    var operator&(const var &) const;
    var operator|(const var &) const;
    var operator^(const var &) const;
    var &operator&=(const var &);
    var &operator|=(const var &);
    var &operator^=(const var &);

    var operator<<(const var &) const;
    var operator>>(const var &) const;
    var &operator<<=(const var &);
    var &operator>>=(const var &);

    var operator<(const var &) const;
    var operator>(const var &) const;
    var operator<=(const var &) const;
    var operator>=(const var &) const;
    var operator==(const var &) const;
    var operator!=(const var &) const;

    var operator!() const;
    var operator&&(const var &) const;
    var operator||(const var &) const;

    explicit operator bool() const;
};
