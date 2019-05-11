#import <Foundation/Foundation.h>

@class TheNameStatusCode, TheNameStatusCodes;

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
@interface TheNameMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface TheNameMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface TheNameNumber : NSNumber
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
@interface TheNameByte : TheNameNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface TheNameUByte : TheNameNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface TheNameShort : TheNameNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface TheNameUShort : TheNameNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface TheNameInt : TheNameNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface TheNameUInt : TheNameNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface TheNameLong : TheNameNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface TheNameULong : TheNameNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface TheNameFloat : TheNameNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface TheNameDouble : TheNameNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface TheNameBoolean : TheNameNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusCode")))
@interface TheNameStatusCode : KotlinBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (BOOL)accepted __attribute__((swift_name("accepted()")));
@property int32_t code;
@property NSString *message;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusCodes")))
@interface TheNameStatusCodes : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TheNameStatusCode *)toStatusCodeCode:(int32_t)code __attribute__((swift_name("toStatusCode(code:)")));
- (TheNameStatusCode * _Nullable)errorOrNullCode:(int32_t)code __attribute__((swift_name("errorOrNull(code:)")));
- (BOOL)isAcceptedCode:(int32_t)code __attribute__((swift_name("isAccepted(code:)")));
- (TheNameStatusCode *)getGenericStatusCodeCode:(int32_t)code __attribute__((swift_name("getGenericStatusCode(code:)")));
@property (readonly) TheNameStatusCode *continueResponse;
@property (readonly) TheNameStatusCode *switchingProtocol;
@property (readonly) TheNameStatusCode *processing;
@property (readonly) TheNameStatusCode *earlyHints;
@property (readonly) TheNameStatusCode *ok;
@property (readonly) TheNameStatusCode *created;
@property (readonly) TheNameStatusCode *accepted;
@property (readonly) TheNameStatusCode *nonAuthoritativeInformation;
@property (readonly) TheNameStatusCode *noContent;
@property (readonly) TheNameStatusCode *resetContent;
@property (readonly) TheNameStatusCode *partialContent;
@property (readonly) TheNameStatusCode *multiStatus;
@property (readonly) TheNameStatusCode *alreadyReported;
@property (readonly) TheNameStatusCode *imUsed;
@property (readonly) TheNameStatusCode *multipleChoices;
@property (readonly) TheNameStatusCode *movedPermanently;
@property (readonly) TheNameStatusCode *found;
@property (readonly) TheNameStatusCode *seeOther;
@property (readonly) TheNameStatusCode *notModified;
@property (readonly) TheNameStatusCode *temporaryRedirect;
@property (readonly) TheNameStatusCode *permanentRedirect;
@property (readonly) TheNameStatusCode *badRequest;
@property (readonly) TheNameStatusCode *invalidCredentials;
@property (readonly) TheNameStatusCode *paymentRequired;
@property (readonly) TheNameStatusCode *forbidden;
@property (readonly) TheNameStatusCode *notFound;
@property (readonly) TheNameStatusCode *notAllowed;
@property (readonly) TheNameStatusCode *notAcceptable;
@property (readonly) TheNameStatusCode *proxyAuthRequired;
@property (readonly) TheNameStatusCode *requestTimeout;
@property (readonly) TheNameStatusCode *conflict;
@property (readonly) TheNameStatusCode *gone;
@property (readonly) TheNameStatusCode *lengthRequired;
@property (readonly) TheNameStatusCode *preconditionFailed;
@property (readonly) TheNameStatusCode *payloadTooLarge;
@property (readonly) TheNameStatusCode *uriTooLong;
@property (readonly) TheNameStatusCode *unsupportedMediaType;
@property (readonly) TheNameStatusCode *rangeNotSatisfiable;
@property (readonly) TheNameStatusCode *expectationFailed;
@property (readonly) TheNameStatusCode *shortAndStout;
@property (readonly) TheNameStatusCode *unprocessableEntity;
@property (readonly) TheNameStatusCode *tooEarly;
@property (readonly) TheNameStatusCode *upgradeRequired;
@property (readonly) TheNameStatusCode *preconditionRequired;
@property (readonly) TheNameStatusCode *tooManyRequests;
@property (readonly) TheNameStatusCode *requestHeaderFieldsTooLarge;
@property (readonly) TheNameStatusCode *unavailableForLegalReasons;
@property (readonly) TheNameStatusCode *internalServerError;
@property (readonly) TheNameStatusCode *notImplemented;
@property (readonly) TheNameStatusCode *badGateway;
@property (readonly) TheNameStatusCode *unavailable;
@property (readonly) TheNameStatusCode *timeout;
@property (readonly) TheNameStatusCode *httpVersionNotSupported;
@property (readonly) TheNameStatusCode *networkAuthRequired;
@end;

NS_ASSUME_NONNULL_END
