template<class Range>
typename boost::range_value<Range>::type
    mean(const Range &a)
{
    BOOST_ASSERT(std::size(a) > 0);
    // a must be acceptable by free function sum
    return sum(a) / std::size(a);
}
