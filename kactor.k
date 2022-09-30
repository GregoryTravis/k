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

class kactor
{
  public var super = nil;

  public fun kactor(_super) {
    super = _super;
  }

  public fun tick(n) {
    var n2 = setLocation(1, 2, 3);
    return n + n2;
  }

  public fun setLocation(x, y, z) {
    return super.setLocation(x, y, z);
  }
}

return kactor;
