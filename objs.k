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

  public fun aa(n) {
    if (n <= 0) {
      return;
    }
    show "aa";
    show n;
    bb(n-1);
  }

  public fun bb(n) {
    if (n <= 0) {
      return;
    }
    show "bb";
    show n;
    aa(n-1);
  }
}

var y = new bap();
y.aa(20);
