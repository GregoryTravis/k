class super
{
  public var kactor = nill;
  public var setLocation_delegate = nill;
  public var getActorLocation_delegate = nill;
  public var getActorRotation_delegate = nill;

  public fun super(_kactor,
                   _setLocation_delegate,
                   _getActorLocation_delegate,
                   _getActorRotation_delegate) {
    kactor = _kactor;
    setLocation_delegate = _setLocation_delegate;
    getActorLocation_delegate = _getActorLocation_delegate;
    getActorRotation_delegate = _getActorRotation_delegate;
  }

  public fun setLocation(x, y, z) {
    return setLocation_delegate(kactor, x, y, z);
  }

  public fun getActorLocation() {
    return getActorLocation_delegate(kactor);
  }

  public fun getActorRotation() {
    return getActorRotation_delegate(kactor);
  }
}

return super;
