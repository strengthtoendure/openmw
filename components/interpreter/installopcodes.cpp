
#include "installopcodes.hpp"

#include "interpreter.hpp"
#include "genericopcodes.hpp"
#include "localopcodes.hpp"
#include "mathopcodes.hpp"

namespace Interpreter
{
    void installOpcodes (Interpreter& interpreter)
    {
        // generic
        interpreter.installSegment0 (0, new OpPushInt);
        interpreter.installSegment5 (3, new OpIntToFloat);
        interpreter.installSegment5 (6, new OpFloatToInt);
        interpreter.installSegment5 (7, new OpNegateInt);
        interpreter.installSegment5 (8, new OpNegateFloat);
        interpreter.installSegment5 (17, new OpIntToFloat1);
        interpreter.installSegment5 (18, new OpFloatToInt1);
                    
        // local variables
        interpreter.installSegment5 (0, new OpStoreLocalShort);
        interpreter.installSegment5 (1, new OpStoreLocalLong);
        interpreter.installSegment5 (2, new OpStoreLocalFloat);        
        interpreter.installSegment5 (4, new OpFetchIntLiteral);            
        interpreter.installSegment5 (5, new OpFetchFloatLiteral);  
        
        // math
        interpreter.installSegment5 (9, new OpAddInt<Type_Integer>);
        interpreter.installSegment5 (10, new OpAddInt<Type_Float>);
        interpreter.installSegment5 (11, new OpSubInt<Type_Integer>);
        interpreter.installSegment5 (12, new OpSubInt<Type_Float>);
        interpreter.installSegment5 (13, new OpMulInt<Type_Integer>);
        interpreter.installSegment5 (14, new OpMulInt<Type_Float>);
        interpreter.installSegment5 (15, new OpDivInt<Type_Integer>);
        interpreter.installSegment5 (16, new OpDivInt<Type_Float>);
    }
}

