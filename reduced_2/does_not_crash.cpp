class a {
  using size_type = long;
  template < typename Self > void at( this Self &&, size_type );
};
template < typename > class b : a{};
template < typename T = int > class d : b< T > {
  using some_type = long;

  some_type f = at( f );
};
d i e
