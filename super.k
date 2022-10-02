fun objectlookup(name, type, obj)
{
  show "asdfasdf";
  show name;
  show type;
  show obj;
  var gs = assoc(name, obj);
  if (gs == nill) {
    show "nill";
    panic();
  } else {
    var v = assoc(type, cdr(gs));
    if (v == nill) {
      panic();
    } else {
      return cdr(v);
    }
  }
}

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
