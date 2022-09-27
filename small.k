fun objectlookup(name, type, obj)
{
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

class ssink
{
  public fun ssink() {
  }

  public fun foo(n) {
    return n * 2;
  }
}

var x = new ssink();
show x.foo(12);
