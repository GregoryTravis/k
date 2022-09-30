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

  public fun super(_kactor) {
    kactor = _kactor;
  }
}

return super;
