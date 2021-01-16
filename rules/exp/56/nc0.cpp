// EXP56-CPP: Noncompliant Code Example
extern "java" typedef void (*java_callback)(int);
 
extern void call_java_fn_ptr(java_callback callback);
void callback_func(int);
 
void f() {
  call_java_fn_ptr(callback_func);
}
