//
//  OPMSDKRoute.h
//  OpmSDK
//
//  Created by Wennan on 2025/7/3.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "OpmVehicleType.h"


NS_ASSUME_NONNULL_BEGIN

typedef void(^OpmRouterCompletion)(NSDictionary * _Nullable result, NSError * _Nullable error);

@interface OpmSDKRoute : NSObject

+ (instancetype)sharedInstance;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

- (OpmSDKRoute *(^)(UINavigationController *))withNavigationController;

- (OpmSDKRoute *(^)(BOOL))withAnimated;

/// 车辆列表页
- (OpmSDKRoute *(^)(NSString * _Nonnull vinWord, OpmRouterCompletion completion))openVehicleList;

/// 车辆详情页
- (OpmSDKRoute *(^)(NSString * _Nonnull vin, NSString * _Nonnull vehicleId, OpmRouterCompletion completion))openVehicleDetail;

/// 车辆监控页
- (OpmSDKRoute *(^)(NSString * _Nonnull vin, NSString * _Nonnull vehicleId, OpmRouterCompletion completion))openVehicleStream;

/// 车辆遥控页
- (OpmSDKRoute *(^)(NSString * _Nonnull vin, NSString * _Nonnull vehicleId, OpmRouterCompletion completion))openVehicleTeleControl;

/// 车辆遥控页（蓝牙）
- (OpmSDKRoute *(^)(NSString * _Nonnull vin, NSString * _Nonnull vehicleId, OpmRouterCompletion completion))openVehicleBtControl;

/// 测试
- (OpmSDKRoute *(^)(OpmRouterCompletion completion))openTestVc;

@end

NS_ASSUME_NONNULL_END
