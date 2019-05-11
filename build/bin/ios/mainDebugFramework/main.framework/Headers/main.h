#import <Foundation/Foundation.h>

@class MainStatusCode, MainStatusCodes, MainSample, MainPlatform;

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
@interface MainMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface MainMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface MainNumber : NSNumber
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
@interface MainByte : MainNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface MainUByte : MainNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface MainShort : MainNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface MainUShort : MainNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface MainInt : MainNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface MainUInt : MainNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface MainLong : MainNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface MainULong : MainNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface MainFloat : MainNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface MainDouble : MainNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface MainBoolean : MainNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusCode")))
@interface MainStatusCode : KotlinBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message detail:(NSString * _Nullable)detail __attribute__((swift_name("init(code:message:detail:)"))) __attribute__((objc_designated_initializer));
- (void)addDetail:(NSString *)detail __attribute__((swift_name("add(detail:)")));
- (BOOL)accepted __attribute__((swift_name("accepted()")));
@property int32_t code;
@property NSString *message;
@property NSString * _Nullable detail;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusCodes")))
@interface MainStatusCodes : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainStatusCode *)toStatusCodeCode:(int32_t)code __attribute__((swift_name("toStatusCode(code:)")));
- (MainStatusCode * _Nullable)errorOrNullCode:(int32_t)code __attribute__((swift_name("errorOrNull(code:)")));
- (BOOL)isAcceptedCode:(int32_t)code __attribute__((swift_name("isAccepted(code:)")));
- (MainStatusCode *)getGenericStatusCodeCode:(int32_t)code __attribute__((swift_name("getGenericStatusCode(code:)")));
@property (readonly) MainStatusCode *continueResponse;
@property (readonly) MainStatusCode *switchingProtocol;
@property (readonly) MainStatusCode *processing;
@property (readonly) MainStatusCode *earlyHints;
@property (readonly) MainStatusCode *ok;
@property (readonly) MainStatusCode *created;
@property (readonly) MainStatusCode *accepted;
@property (readonly) MainStatusCode *nonAuthoritativeInformation;
@property (readonly) MainStatusCode *noContent;
@property (readonly) MainStatusCode *resetContent;
@property (readonly) MainStatusCode *partialContent;
@property (readonly) MainStatusCode *multiStatus;
@property (readonly) MainStatusCode *alreadyReported;
@property (readonly) MainStatusCode *imUsed;
@property (readonly) MainStatusCode *multipleChoices;
@property (readonly) MainStatusCode *movedPermanently;
@property (readonly) MainStatusCode *found;
@property (readonly) MainStatusCode *seeOther;
@property (readonly) MainStatusCode *notModified;
@property (readonly) MainStatusCode *temporaryRedirect;
@property (readonly) MainStatusCode *permanentRedirect;
@property (readonly) MainStatusCode *badRequest;
@property (readonly) MainStatusCode *invalidCredentials;
@property (readonly) MainStatusCode *paymentRequired;
@property (readonly) MainStatusCode *forbidden;
@property (readonly) MainStatusCode *notFound;
@property (readonly) MainStatusCode *notAllowed;
@property (readonly) MainStatusCode *notAcceptable;
@property (readonly) MainStatusCode *proxyAuthRequired;
@property (readonly) MainStatusCode *requestTimeout;
@property (readonly) MainStatusCode *conflict;
@property (readonly) MainStatusCode *gone;
@property (readonly) MainStatusCode *lengthRequired;
@property (readonly) MainStatusCode *preconditionFailed;
@property (readonly) MainStatusCode *payloadTooLarge;
@property (readonly) MainStatusCode *uriTooLong;
@property (readonly) MainStatusCode *unsupportedMediaType;
@property (readonly) MainStatusCode *rangeNotSatisfiable;
@property (readonly) MainStatusCode *expectationFailed;
@property (readonly) MainStatusCode *shortAndStout;
@property (readonly) MainStatusCode *unprocessableEntity;
@property (readonly) MainStatusCode *tooEarly;
@property (readonly) MainStatusCode *upgradeRequired;
@property (readonly) MainStatusCode *preconditionRequired;
@property (readonly) MainStatusCode *tooManyRequests;
@property (readonly) MainStatusCode *requestHeaderFieldsTooLarge;
@property (readonly) MainStatusCode *unavailableForLegalReasons;
@property (readonly) MainStatusCode *internalServerError;
@property (readonly) MainStatusCode *notImplemented;
@property (readonly) MainStatusCode *badGateway;
@property (readonly) MainStatusCode *unavailable;
@property (readonly) MainStatusCode *timeout;
@property (readonly) MainStatusCode *httpVersionNotSupported;
@property (readonly) MainStatusCode *networkAuthRequired;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sample")))
@interface MainSample : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)checkMe __attribute__((swift_name("checkMe()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface MainPlatform : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platform __attribute__((swift_name("init()")));
- (NSString *)name __attribute__((swift_name("name()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleKt")))
@interface MainSampleKt : KotlinBase
+ (NSString *)hello __attribute__((swift_name("hello()")));
@end;

NS_ASSUME_NONNULL_END
