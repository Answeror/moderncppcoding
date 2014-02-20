struct fn {
    virtual double call(const np::vec &x) const = 0;
};
np::vec optimize(const fn &f, const np::vec &initx);
