#import <Foundation/Foundation.h>

@class StatusCodesStatusCode, StatusCodesStatusCodes;

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
@interface StatusCodesMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface StatusCodesMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface StatusCodesNumber : NSNumber
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
@interface StatusCodesByte : StatusCodesNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface StatusCodesUByte : StatusCodesNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface StatusCodesShort : StatusCodesNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface StatusCodesUShort : StatusCodesNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface StatusCodesInt : StatusCodesNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface StatusCodesUInt : StatusCodesNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface StatusCodesLong : StatusCodesNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface StatusCodesULong : StatusCodesNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface StatusCodesFloat : StatusCodesNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface StatusCodesDouble : StatusCodesNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface StatusCodesBoolean : StatusCodesNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusCode")))
@interface StatusCodesStatusCode : KotlinBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (BOOL)accepted __attribute__((swift_name("accepted()")));
@property int32_t code;
@property NSString *message;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusCodes")))
@interface StatusCodesStatusCodes : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (StatusCodesStatusCode *)toStatusCodeCode:(int32_t)code __attribute__((swift_name("toStatusCode(code:)")));
- (StatusCodesStatusCode * _Nullable)errorOrNullCode:(int32_t)code __attribute__((swift_name("errorOrNull(code:)")));
- (BOOL)isAcceptedCode:(int32_t)code __attribute__((swift_name("isAccepted(code:)")));
- (StatusCodesStatusCode *)getGenericStatusCodeCode:(int32_t)code __attribute__((swift_name("getGenericStatusCode(code:)")));
@property (readonly) StatusCodesStatusCode *continueResponse;
@property (readonly) StatusCodesStatusCode *switchingProtocol;
@property (readonly) StatusCodesStatusCode *processing;
@property (readonly) StatusCodesStatusCode *earlyHints;
@property (readonly) StatusCodesStatusCode *ok;
@property (readonly) StatusCodesStatusCode *created;
@property (readonly) StatusCodesStatusCode *accepted;
@property (readonly) StatusCodesStatusCode *nonAuthoritativeInformation;
@property (readonly) StatusCodesStatusCode *noContent;
@property (readonly) StatusCodesStatusCode *resetContent;
@property (readonly) StatusCodesStatusCode *partialContent;
@property (readonly) StatusCodesStatusCode *multiStatus;
@property (readonly) StatusCodesStatusCode *alreadyReported;
@property (readonly) StatusCodesStatusCode *imUsed;
@property (readonly) StatusCodesStatusCode *multipleChoices;
@property (readonly) StatusCodesStatusCode *movedPermanently;
@property (readonly) StatusCodesStatusCode *found;
@property (readonly) StatusCodesStatusCode *seeOther;
@property (readonly) StatusCodesStatusCode *notModified;
@property (readonly) StatusCodesStatusCode *temporaryRedirect;
@property (readonly) StatusCodesStatusCode *permanentRedirect;
@property (readonly) StatusCodesStatusCode *badRequest;
@property (readonly) StatusCodesStatusCode *invalidCredentials;
@property (readonly) StatusCodesStatusCode *paymentRequired;
@property (readonly) StatusCodesStatusCode *forbidden;
@property (readonly) StatusCodesStatusCode *notFound;
@property (readonly) StatusCodesStatusCode *notAllowed;
@property (readonly) StatusCodesStatusCode *notAcceptable;
@property (readonly) StatusCodesStatusCode *proxyAuthRequired;
@property (readonly) StatusCodesStatusCode *requestTimeout;
@property (readonly) StatusCodesStatusCode *conflict;
@property (readonly) StatusCodesStatusCode *gone;
@property (readonly) StatusCodesStatusCode *lengthRequired;
@property (readonly) StatusCodesStatusCode *preconditionFailed;
@property (readonly) StatusCodesStatusCode *payloadTooLarge;
@property (readonly) StatusCodesStatusCode *uriTooLong;
@property (readonly) StatusCodesStatusCode *unsupportedMediaType;
@property (readonly) StatusCodesStatusCode *rangeNotSatisfiable;
@property (readonly) StatusCodesStatusCode *expectationFailed;
@property (readonly) StatusCodesStatusCode *shortAndStout;
@property (readonly) StatusCodesStatusCode *unprocessableEntity;
@property (readonly) StatusCodesStatusCode *tooEarly;
@property (readonly) StatusCodesStatusCode *upgradeRequired;
@property (readonly) StatusCodesStatusCode *preconditionRequired;
@property (readonly) StatusCodesStatusCode *tooManyRequests;
@property (readonly) StatusCodesStatusCode *requestHeaderFieldsTooLarge;
@property (readonly) StatusCodesStatusCode *unavailableForLegalReasons;
@property (readonly) StatusCodesStatusCode *internalServerError;
@property (readonly) StatusCodesStatusCode *notImplemented;
@property (readonly) StatusCodesStatusCode *badGateway;
@property (readonly) StatusCodesStatusCode *unavailable;
@property (readonly) StatusCodesStatusCode *timeout;
@property (readonly) StatusCodesStatusCode *httpVersionNotSupported;
@property (readonly) StatusCodesStatusCode *networkAuthRequired;
@end;

NS_ASSUME_NONNULL_END
