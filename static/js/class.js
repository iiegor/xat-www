(function() {
  var a = !1,
    b = /xyz/.test(function() {}) ? /\b_super\b/ : /.*/;

  this.Class = function() {};

  Class.extend = function(c) {
    function d() {
      !a && this.init && this.init.apply(this, arguments)
    }
    var e = this.prototype;
    a = !0;
    var f = new this;
    a = !1;
    for (var g in c)
      f[g] = "function" == typeof c[g] && "function" == typeof e[g] && b.test(c[g]) ? function(a, b) {
        return function() {
          var c = this._super;
          this._super = e[a];
          var d = b.apply(this, arguments);
          return this._super = c,
          d
        }
      }(g, c[g]) : c[g];
    return d.prototype = f,
    d.prototype.constructor = d,
    d.extend = arguments.callee,
    d
  };

  Class.addSingleton = function(a) {
    a.getInstance = function(b) {
      return a._instance || (a._instance = new a(b))
    }
  };

  this.Iface = function(a) {
      this.methods = a
  };

  this.Iface.extractPublicMethodsFrom = function(a) {
    var b = [];
    for (var c in a.prototype) {
      var d = a.prototype[c];
      "constructor" != c && "init" != c && "function" == typeof d && "_" != c.charAt(0) && b.push(c)
    }
    return b
  };

  Iface._implementations = {};
  
  Iface.defineImplementation = function(a, b) {
    b in Iface._implementations || (Iface._implementations[b] = []),
    Iface._implementations[b].push(a)
  }
})();

Namespace = function() {
  var a, b, c, d = arguments, e = null;

  for (a = 0; a < d.length; a += 1)
    for (c = d[a].split("."),
    e = window,
    b = 0; b < c.length; b += 1)
      e[c[b]] = e[c[b]] || {},
      e = e[c[b]];

  return e;
}
