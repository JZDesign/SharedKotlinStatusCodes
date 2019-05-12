#import <Foundation/Foundation.h>

@class SCHStatusCode, SCHStatusCodes;

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
@property int32_t code;
@property NSString *message;
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
@property (readonly) SCHStatusCode *continueResponse;
@property (readonly) SCHStatusCode *switchingProtocol;
@property (readonly) SCHStatusCode *processing;
@property (readonly) SCHStatusCode *earlyHints;
@property (readonly) SCHStatusCode *ok;
@property (readonly) SCHStatusCode *created;
@property (readonly) SCHStatusCode *accepted;
@property (readonly) SCHStatusCode *nonAuthoritativeInformation;
@property (readonly) SCHStatusCode *noContent;
@property (readonly) SCHStatusCode *resetContent;
@property (readonly) SCHStatusCode *partialContent;
@property (readonly) SCHStatusCode *multiStatus;
@property (readonly) SCHStatusCode *alreadyReported;
@property (readonly) SCHStatusCode *imUsed;
@property (readonly) SCHStatusCode *multipleChoices;
@property (readonly) SCHStatusCode *movedPermanently;
@property (readonly) SCHStatusCode *found;
@property (readonly) SCHStatusCode *seeOther;
@property (readonly) SCHStatusCode *notModified;
@property (readonly) SCHStatusCode *temporaryRedirect;
@property (readonly) SCHStatusCode *permanentRedirect;
@property (readonly) SCHStatusCode *badRequest;
@property (readonly) SCHStatusCode *invalidCredentials;
@property (readonly) SCHStatusCode *paymentRequired;
@property (readonly) SCHStatusCode *forbidden;
@property (readonly) SCHStatusCode *notFound;
@property (readonly) SCHStatusCode *notAllowed;
@property (readonly) SCHStatusCode *notAcceptable;
@property (readonly) SCHStatusCode *proxyAuthRequired;
@property (readonly) SCHStatusCode *requestTimeout;
@property (readonly) SCHStatusCode *conflict;
@property (readonly) SCHStatusCode *gone;
@property (readonly) SCHStatusCode *lengthRequired;
@property (readonly) SCHStatusCode *preconditionFailed;
@property (readonly) SCHStatusCode *payloadTooLarge;
@property (readonly) SCHStatusCode *uriTooLong;
@property (readonly) SCHStatusCode *unsupportedMediaType;
@property (readonly) SCHStatusCode *rangeNotSatisfiable;
@property (readonly) SCHStatusCode *expectationFailed;
@property (readonly) SCHStatusCode *shortAndStout;
@property (readonly) SCHStatusCode *unprocessableEntity;
@property (readonly) SCHStatusCode *tooEarly;
@property (readonly) SCHStatusCode *upgradeRequired;
@property (readonly) SCHStatusCode *preconditionRequired;
@property (readonly) SCHStatusCode *tooManyRequests;
@property (readonly) SCHStatusCode *requestHeaderFieldsTooLarge;
@property (readonly) SCHStatusCode *unavailableForLegalReasons;
@property (readonly) SCHStatusCode *internalServerError;
@property (readonly) SCHStatusCode *notImplemented;
@property (readonly) SCHStatusCode *badGateway;
@property (readonly) SCHStatusCode *unavailable;
@property (readonly) SCHStatusCode *timeout;
@property (readonly) SCHStatusCode *httpVersionNotSupported;
@property (readonly) SCHStatusCode *networkAuthRequired;
@end;

NS_ASSUME_NONNULL_END
