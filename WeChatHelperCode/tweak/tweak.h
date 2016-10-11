#import <substrate.h>
#define LOCATION_PATH @"/var/mobile/Library/Preferences/controlCf"

@interface BadRoomLogicController : NSObject

@end

@interface MMObject : NSObject

@end

@interface WXGesture : MMObject

@end

@interface MMTimer : NSObject

@end

@interface MMUIView : UIView

@end 

@interface MMInputToolView : MMUIView 

@end

@protocol BaseMsgContentDelgate <NSObject>

@end

@protocol BaseMsgContentInBackgroundThreadDelgate <NSObject>
//- (NSMutableArray *)QueryMsgText:(NSString *)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;
@end

@interface MMUIViewController : UIViewController

@end

@interface MMSearchBarDisplayController : MMUIViewController

@end

@interface BaseMsgContentViewController : MMSearchBarDisplayController 

@property(nonatomic) id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate;
@property(nonatomic) id <BaseMsgContentDelgate> m_delegate; 

@end

@interface CMessageWrap : MMObject
{

	unsigned int m_uiMessageType;
	NSString *m_nsContent;

}

@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
@end

@interface MMService : NSObject

@end

@interface CContactMgr : MMService

- (id)getSelfContact;

@end

@interface MMServiceCenter : NSObject
{
    NSMutableDictionary *m_dicService;
    NSRecursiveLock *m_lock;
}

+ (id)defaultCenter;
- (void)callClearData;
- (void)callReloadData;
- (void)callServiceMemoryWarning;
- (void)callTerminate;
- (void)callEnterBackground;
- (void)callEnterForeground;
- (void)removeService:(Class)arg1;
- (id)getService:(Class)arg1;
- (void)dealloc;
- (id)init;

@end

@interface WCBizUtil : NSObject
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
+ (id)getWCRedEnvelopesLastRadomHBSelctedCountPath;
+ (id)getWCRedEnvelopesUserInfoPath;
@end

@interface WCPayInfoItem : NSObject
{
	NSString *m_c2cNativeUrl;
}

@property(retain, nonatomic) NSString *m_c2cNativeUrl; // @synthesize m_c2cNativeUrl;

@end

@interface CMessageWrap (APP)

@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem; 
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@end

@interface WCRedEnvelopesLogicMgr : MMService
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)QueryRedEnvelopesDetailRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;

@end

@interface WCRedEnvelopesControlData : NSObject
@property(retain, nonatomic) NSString *m_nsWCRedEnvelopesBrandMessageNativeUrl; 
@property(retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap; 

@end

@interface CBaseContact : NSObject
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
- (id)getContactDisplayName;
- (id)getContactDisplayUsrName;
@end

@interface CContact : CBaseContact

@end

@interface NotificationActionsMgr : MMService

- (void)handleRemoteActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(id)arg4;
- (void)handleLocalActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(id)arg4;

@end


@interface WXPBGeneratedMessage : NSObject

@end

@interface SKBuiltinBuffer_t : WXPBGeneratedMessage

@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int iLen; // @dynamic iLen;

@end

@interface BaseResponse : WXPBGeneratedMessage

@property(nonatomic) int ret; // @dynamic ret;

@end

@interface HongBaoRes : WXPBGeneratedMessage

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int cgiCmdid; // @dynamic cgiCmdid;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(nonatomic) int errorType; // @dynamic errorType;
@property(retain, nonatomic) NSString *platMsg; // @dynamic platMsg;
@property(nonatomic) int platRet; // @dynamic platRet;
@property(retain, nonatomic) SKBuiltinBuffer_t *retText; // @dynamic retText;

@end

@interface HongBaoReq : WXPBGeneratedMessage

//@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cgiCmd; // @dynamic cgiCmd;
@property(nonatomic) unsigned int outPutType; // @dynamic outPutType;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqText; // @dynamic reqText;

@end

@interface MMExtension : NSObject

- (id)description;
- (void)cleanUp;
- (id)getKeyExtensionList:(id)arg1;
- (id)getExtensionListForSelector:(SEL)arg1;
- (void)unregisterKeyExtension:(id)arg1;
- (void)unregisterExtension:(id)arg1 forKey:(id)arg2;
- (void)unregisterExtension:(id)arg1;
- (_Bool)registerExtension:(id)arg1 forKey:(id)arg2;
- (_Bool)registerExtension:(id)arg1;
- (id)initWithKey:(id)arg1;

@end

@interface MMExtensionObject : NSObject
{
    void *m_Obj;
    _Bool m_deleteMark;
}

@property(nonatomic) _Bool m_deleteMark; // @synthesize m_deleteMark;
- (id)description;
- (id)initWithObject:(void *)arg1;
- (_Bool)isObjectEqual:(void *)arg1;
- (void *)getObject;
- (void)setObject:(void *)arg1;

@end

@interface WCRedEnvelopesReceiveControlLogic
- (void)startLogic;
@end


