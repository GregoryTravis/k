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
  public fun kactor() {
  }

  public fun tick(n) {
    return n + 10;
  }
}

return kactor;
