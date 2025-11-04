//
//  OpmSDKManager.h
//  OpmSDK
//
//  Created by Wennan on 2025/6/30.
//

#import <Foundation/Foundation.h>
#import "OpmSDKEnvironment.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const SDKConfigurationChangedNotification;

typedef void(^SDKManagerNeedsTokenRefreshBlock)(void(^completion)(NSString *newToken, NSError *error));

@protocol OpmSDKManagerDelegate <NSObject>


@optional
/**
 *  环境发生变化
 * @param oldEnvironment 旧的环境配置
 * @param newEnvironment 新的环境配置
 */
- (void)environmentDidChange:(OpmSDKEnvironment *)oldEnvironment newEnvironment:(OpmSDKEnvironment *)newEnvironment;

@end

@interface OpmSDKManager : NSObject

// Token 刷新Block
@property (nonatomic, copy) SDKManagerNeedsTokenRefreshBlock onTokenExpiredHandler;

// 测试/生产
@property (nonatomic, strong, readonly) OpmSDKEnvironment *environment;

@property (nonatomic, copy, readonly) NSString *userId;

@property (nonatomic, copy, readonly) NSString *authToken;

//
@property (nonatomic, copy, readonly) NSString *appKey;

// 高德地图 key
@property (nonatomic, copy, readonly) NSString *aMapKey;


@property (nonatomic, weak) id<OpmSDKManagerDelegate> delegate;


+ (instancetype)sharedInstance;

- (void)initializeWithAuthToken:(NSString *)authToken
                      userId:(NSString *)userId
                    environment:(SDKEnvironmentType)environment;

- (void)updateAppKey:(NSString *)appKey;

- (void)updateAMapKey:(NSString * _Nonnull)aMapKey;

- (void)updateEnvironment:(SDKEnvironmentType)environment;

- (void)updateAuthToken:(NSString *)token;

@end

NS_ASSUME_NONNULL_END
