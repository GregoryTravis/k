class super
{
  public var kactor = nill;
  public var setLocation_delegate = nill;

  public fun super(_kactor, _setLocation_delegate) {
    kactor = _kactor;
    setLocation_delegate = _setLocation_delegate;
  }

  public fun setLocation(x, y, z) {
    return setLocation_delegate(kactor, x, y, z);
  }
}

return super;
