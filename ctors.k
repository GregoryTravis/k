fun objectlookup(name, type, obj)
{
  //show "asdfasdf";
  //show name;
  //show type;
  //show obj;
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

class foo
{
  public var a = nil;
  public var b = nil;

  public fun foo(_a, _b) {
    a = _a;
    b = _b;
  }

  public fun sho() {
    show "sho";
    show a;
    show b;
  }

  public fun shoa(a, b) {
    show "shoa";
    show a;
    show b;
  }
}

class foo3
{
  public var a = nil;
  public var b = nil;
  public var c = nil;

  public fun foo3(_a, _b, _c) {
    a = _a;
    b = _b;
    c = _c;
  }

  public fun sho() {
    show "sho";
    show a;
    show b;
    show c;
  }

  public fun shoa(a, b, c) {
    show "shoa";
    show a;
    show b;
    show c;
  }
}

var f = new foo(20, 30);
f.sho();
f.shoa(21, 31);
var f3 = new foo3(20, 30, 40);
f3.sho();
f3.shoa(21, 31, 41);

fun lala(x, y, z) {
  show "asdf";
  show x;
  show y;
  show z;
}

lala(1, 2, 3);
