#include "model.h"
#include "helper.h"
namespace model_lib { 
  int return_num(int n) 
  { 
      Helper helper;
      int age = helper.get_age();
      return n + age; 
  }
}