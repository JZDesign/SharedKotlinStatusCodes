#import <Foundation/Foundation.h>

@class KotlinSharedStatusCode, KotlinSharedStatusCodes;

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
@interface KotlinSharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface KotlinSharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface KotlinSharedNumber : NSNumber
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
@interface KotlinSharedByte : KotlinSharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface KotlinSharedUByte : KotlinSharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface KotlinSharedShort : KotlinSharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface KotlinSharedUShort : KotlinSharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface KotlinSharedInt : KotlinSharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface KotlinSharedUInt : KotlinSharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface KotlinSharedLong : KotlinSharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface KotlinSharedULong : KotlinSharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface KotlinSharedFloat : KotlinSharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface KotlinSharedDouble : KotlinSharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface KotlinSharedBoolean : KotlinSharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusCode")))
@interface KotlinSharedStatusCode : KotlinBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (BOOL)accepted __attribute__((swift_name("accepted()")));
@property int32_t code;
@property NSString *message;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusCodes")))
@interface KotlinSharedStatusCodes : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KotlinSharedStatusCode *)toStatusCodeCode:(int32_t)code __attribute__((swift_name("toStatusCode(code:)")));
- (KotlinSharedStatusCode * _Nullable)errorOrNullCode:(int32_t)code __attribute__((swift_name("errorOrNull(code:)")));
- (BOOL)isAcceptedCode:(int32_t)code __attribute__((swift_name("isAccepted(code:)")));
- (KotlinSharedStatusCode *)getGenericStatusCodeCode:(int32_t)code __attribute__((swift_name("getGenericStatusCode(code:)")));
@property (readonly) KotlinSharedStatusCode *continueResponse;
@property (readonly) KotlinSharedStatusCode *switchingProtocol;
@property (readonly) KotlinSharedStatusCode *processing;
@property (readonly) KotlinSharedStatusCode *earlyHints;
@property (readonly) KotlinSharedStatusCode *ok;
@property (readonly) KotlinSharedStatusCode *created;
@property (readonly) KotlinSharedStatusCode *accepted;
@property (readonly) KotlinSharedStatusCode *nonAuthoritativeInformation;
@property (readonly) KotlinSharedStatusCode *noContent;
@property (readonly) KotlinSharedStatusCode *resetContent;
@property (readonly) KotlinSharedStatusCode *partialContent;
@property (readonly) KotlinSharedStatusCode *multiStatus;
@property (readonly) KotlinSharedStatusCode *alreadyReported;
@property (readonly) KotlinSharedStatusCode *imUsed;
@property (readonly) KotlinSharedStatusCode *multipleChoices;
@property (readonly) KotlinSharedStatusCode *movedPermanently;
@property (readonly) KotlinSharedStatusCode *found;
@property (readonly) KotlinSharedStatusCode *seeOther;
@property (readonly) KotlinSharedStatusCode *notModified;
@property (readonly) KotlinSharedStatusCode *temporaryRedirect;
@property (readonly) KotlinSharedStatusCode *permanentRedirect;
@property (readonly) KotlinSharedStatusCode *badRequest;
@property (readonly) KotlinSharedStatusCode *invalidCredentials;
@property (readonly) KotlinSharedStatusCode *paymentRequired;
@property (readonly) KotlinSharedStatusCode *forbidden;
@property (readonly) KotlinSharedStatusCode *notFound;
@property (readonly) KotlinSharedStatusCode *notAllowed;
@property (readonly) KotlinSharedStatusCode *notAcceptable;
@property (readonly) KotlinSharedStatusCode *proxyAuthRequired;
@property (readonly) KotlinSharedStatusCode *requestTimeout;
@property (readonly) KotlinSharedStatusCode *conflict;
@property (readonly) KotlinSharedStatusCode *gone;
@property (readonly) KotlinSharedStatusCode *lengthRequired;
@property (readonly) KotlinSharedStatusCode *preconditionFailed;
@property (readonly) KotlinSharedStatusCode *payloadTooLarge;
@property (readonly) KotlinSharedStatusCode *uriTooLong;
@property (readonly) KotlinSharedStatusCode *unsupportedMediaType;
@property (readonly) KotlinSharedStatusCode *rangeNotSatisfiable;
@property (readonly) KotlinSharedStatusCode *expectationFailed;
@property (readonly) KotlinSharedStatusCode *shortAndStout;
@property (readonly) KotlinSharedStatusCode *unprocessableEntity;
@property (readonly) KotlinSharedStatusCode *tooEarly;
@property (readonly) KotlinSharedStatusCode *upgradeRequired;
@property (readonly) KotlinSharedStatusCode *preconditionRequired;
@property (readonly) KotlinSharedStatusCode *tooManyRequests;
@property (readonly) KotlinSharedStatusCode *requestHeaderFieldsTooLarge;
@property (readonly) KotlinSharedStatusCode *unavailableForLegalReasons;
@property (readonly) KotlinSharedStatusCode *internalServerError;
@property (readonly) KotlinSharedStatusCode *notImplemented;
@property (readonly) KotlinSharedStatusCode *badGateway;
@property (readonly) KotlinSharedStatusCode *unavailable;
@property (readonly) KotlinSharedStatusCode *timeout;
@property (readonly) KotlinSharedStatusCode *httpVersionNotSupported;
@property (readonly) KotlinSharedStatusCode *networkAuthRequired;
@end;

NS_ASSUME_NONNULL_END
