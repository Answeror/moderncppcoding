// qda.hpp
class QDA {
public:
    QDA();
    ~QDA();
    
    QDA fit(const np::mat &X, const np::ivec &y);
    np::ivec predict(const np::mat &X) const;

protected:
    struct impl;
    yapimpl::shared<impl> m;
};
