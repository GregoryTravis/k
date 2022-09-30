fun objectlookup(name, type, obj)
{
  show "asdfasdf";
  show name;
  show type;
  show obj;
  var gs = assoc(name, obj);
  if (gs == nil) {
    show "nil";
    panic();
  } else {
    var v = assoc(type, cdr(gs));
    if (v == nil) {
      panic();
    } else {
      return cdr(v);
    }
  }
}

class super
{
  public var kactor = nil;
  public var setLocation_delegate = nil;

  public fun super(_kactor, _setLocation_delegate) {
    kactor = _kactor;
    setLocation_delegate = _setLocation_delegate;
  }

  public fun setLocation(x, y, z) {
    return setLocation_delegate(kactor, x, y, z);
  }
}

return super;
