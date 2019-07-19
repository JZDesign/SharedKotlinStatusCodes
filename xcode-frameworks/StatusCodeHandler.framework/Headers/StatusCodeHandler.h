#import <Foundation/Foundation.h>

@class SCHStatusCode, SCHKotlinUnit, SCHStatusCodes;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface SCHMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface SCHMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface SCHNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface SCHByte : SCHNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface SCHUByte : SCHNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface SCHShort : SCHNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface SCHUShort : SCHNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface SCHInt : SCHNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface SCHUInt : SCHNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface SCHLong : SCHNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface SCHULong : SCHNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface SCHFloat : SCHNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface SCHDouble : SCHNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface SCHBoolean : SCHNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusCode")))
@interface SCHStatusCode : KotlinBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (BOOL)accepted __attribute__((swift_name("accepted()")));
- (void)ifAcceptedBlock:(SCHKotlinUnit *(^)(void))block __attribute__((swift_name("ifAccepted(block:)")));
@property int32_t code __attribute__((swift_name("code")));
@property NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusCodes")))
@interface SCHStatusCodes : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SCHStatusCode *)toStatusCodeCode:(int32_t)code __attribute__((swift_name("toStatusCode(code:)")));
- (SCHStatusCode * _Nullable)errorOrNullCode:(int32_t)code __attribute__((swift_name("errorOrNull(code:)")));
- (BOOL)isAcceptedCode:(int32_t)code __attribute__((swift_name("isAccepted(code:)")));
- (SCHStatusCode *)getGenericStatusCodeCode:(int32_t)code __attribute__((swift_name("getGenericStatusCode(code:)")));
@property (readonly) SCHStatusCode *continueResponse __attribute__((swift_name("continueResponse")));
@property (readonly) SCHStatusCode *switchingProtocol __attribute__((swift_name("switchingProtocol")));
@property (readonly) SCHStatusCode *processing __attribute__((swift_name("processing")));
@property (readonly) SCHStatusCode *earlyHints __attribute__((swift_name("earlyHints")));
@property (readonly) SCHStatusCode *ok __attribute__((swift_name("ok")));
@property (readonly) SCHStatusCode *created __attribute__((swift_name("created")));
@property (readonly) SCHStatusCode *accepted __attribute__((swift_name("accepted")));
@property (readonly) SCHStatusCode *nonAuthoritativeInformation __attribute__((swift_name("nonAuthoritativeInformation")));
@property (readonly) SCHStatusCode *noContent __attribute__((swift_name("noContent")));
@property (readonly) SCHStatusCode *resetContent __attribute__((swift_name("resetContent")));
@property (readonly) SCHStatusCode *partialContent __attribute__((swift_name("partialContent")));
@property (readonly) SCHStatusCode *multiStatus __attribute__((swift_name("multiStatus")));
@property (readonly) SCHStatusCode *alreadyReported __attribute__((swift_name("alreadyReported")));
@property (readonly) SCHStatusCode *imUsed __attribute__((swift_name("imUsed")));
@property (readonly) SCHStatusCode *multipleChoices __attribute__((swift_name("multipleChoices")));
@property (readonly) SCHStatusCode *movedPermanently __attribute__((swift_name("movedPermanently")));
@property (readonly) SCHStatusCode *found __attribute__((swift_name("found")));
@property (readonly) SCHStatusCode *seeOther __attribute__((swift_name("seeOther")));
@property (readonly) SCHStatusCode *notModified __attribute__((swift_name("notModified")));
@property (readonly) SCHStatusCode *temporaryRedirect __attribute__((swift_name("temporaryRedirect")));
@property (readonly) SCHStatusCode *permanentRedirect __attribute__((swift_name("permanentRedirect")));
@property (readonly) SCHStatusCode *badRequest __attribute__((swift_name("badRequest")));
@property (readonly) SCHStatusCode *invalidCredentials __attribute__((swift_name("invalidCredentials")));
@property (readonly) SCHStatusCode *paymentRequired __attribute__((swift_name("paymentRequired")));
@property (readonly) SCHStatusCode *forbidden __attribute__((swift_name("forbidden")));
@property (readonly) SCHStatusCode *notFound __attribute__((swift_name("notFound")));
@property (readonly) SCHStatusCode *notAllowed __attribute__((swift_name("notAllowed")));
@property (readonly) SCHStatusCode *notAcceptable __attribute__((swift_name("notAcceptable")));
@property (readonly) SCHStatusCode *proxyAuthRequired __attribute__((swift_name("proxyAuthRequired")));
@property (readonly) SCHStatusCode *requestTimeout __attribute__((swift_name("requestTimeout")));
@property (readonly) SCHStatusCode *conflict __attribute__((swift_name("conflict")));
@property (readonly) SCHStatusCode *gone __attribute__((swift_name("gone")));
@property (readonly) SCHStatusCode *lengthRequired __attribute__((swift_name("lengthRequired")));
@property (readonly) SCHStatusCode *preconditionFailed __attribute__((swift_name("preconditionFailed")));
@property (readonly) SCHStatusCode *payloadTooLarge __attribute__((swift_name("payloadTooLarge")));
@property (readonly) SCHStatusCode *uriTooLong __attribute__((swift_name("uriTooLong")));
@property (readonly) SCHStatusCode *unsupportedMediaType __attribute__((swift_name("unsupportedMediaType")));
@property (readonly) SCHStatusCode *rangeNotSatisfiable __attribute__((swift_name("rangeNotSatisfiable")));
@property (readonly) SCHStatusCode *expectationFailed __attribute__((swift_name("expectationFailed")));
@property (readonly) SCHStatusCode *shortAndStout __attribute__((swift_name("shortAndStout")));
@property (readonly) SCHStatusCode *unprocessableEntity __attribute__((swift_name("unprocessableEntity")));
@property (readonly) SCHStatusCode *tooEarly __attribute__((swift_name("tooEarly")));
@property (readonly) SCHStatusCode *upgradeRequired __attribute__((swift_name("upgradeRequired")));
@property (readonly) SCHStatusCode *preconditionRequired __attribute__((swift_name("preconditionRequired")));
@property (readonly) SCHStatusCode *tooManyRequests __attribute__((swift_name("tooManyRequests")));
@property (readonly) SCHStatusCode *requestHeaderFieldsTooLarge __attribute__((swift_name("requestHeaderFieldsTooLarge")));
@property (readonly) SCHStatusCode *unavailableForLegalReasons __attribute__((swift_name("unavailableForLegalReasons")));
@property (readonly) SCHStatusCode *internalServerError __attribute__((swift_name("internalServerError")));
@property (readonly) SCHStatusCode *notImplemented __attribute__((swift_name("notImplemented")));
@property (readonly) SCHStatusCode *badGateway __attribute__((swift_name("badGateway")));
@property (readonly) SCHStatusCode *unavailable __attribute__((swift_name("unavailable")));
@property (readonly) SCHStatusCode *timeout __attribute__((swift_name("timeout")));
@property (readonly) SCHStatusCode *httpVersionNotSupported __attribute__((swift_name("httpVersionNotSupported")));
@property (readonly) SCHStatusCode *networkAuthRequired __attribute__((swift_name("networkAuthRequired")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SCHKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

NS_ASSUME_NONNULL_END
