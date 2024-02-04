class a
{
public:
  using ssize_type = long ;

  template< typename Self >
  void at( this Self &&, ssize_type ) ;
};

template< typename > class b : a {} ;

template< typename T = int >
class c : b< T >
{
public:
  using some_type = long ;

  void erase() noexcept ;
};

template< typename T >
void c< T >::erase() noexcept
{
  some_type f = at( f );
}

void h() {
  c vec;
  vec.erase();
}
