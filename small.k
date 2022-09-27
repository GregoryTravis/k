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
  public var q = 10;
  public var r = 0;

  public fun ssink(_r) {
    r = _r;
  }

  public fun foo(n) {
    return n * 2 + q + bar() + r;
  }

  public fun bar() {
    return 10000;
  }
}

var x = new ssink(800);
show x.foo(12);
x.q = 100;
show x.foo(12);

class bap
{
  public fun bap() {
  }
}
