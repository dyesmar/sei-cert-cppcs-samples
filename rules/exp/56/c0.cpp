// EXP56-CPP: Compliant Solution
extern "java" typedef void (*java_callback)(int);

extern void call_java_fn_ptr(java_callback callback);
extern "java" void callback_func(int);

void f() {
  call_java_fn_ptr(callback_func);
}
