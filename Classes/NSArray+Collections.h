@interface NSArray (NSArray_Collections)
-(NSArray *) map:(id(^)(id object))block;
-(id) reduce:(id(^)(id value, id object))block initial:(id)initial;
-(NSArray *) select:(BOOL(^)(id object))block;
-(NSArray *) filter:(BOOL(^)(id object))block;
-(NSArray *) each:(void(^)(id object))block;
-(NSArray *) sort:(int(^)(id a, id b))block;
-(NSString *) join;
-(NSString *) join:(NSString *)separator;
-(NSArray *) take:(int)number;
-(NSArray *) step:(int)number;
-(BOOL) all:(BOOL(^)(id object))block;
-(BOOL) none:(BOOL(^)(id object))block;
-(BOOL) any:(BOOL(^)(id object))block;
-(id) first;
-(id) last;
-(id) detect:(BOOL(^)(id object))block;
-(id) first:(BOOL(^)(id object))block;
-(NSDictionary *) partition:(id(^)(id object))block;
@end
