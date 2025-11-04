//
//  SDKEnvironment.h
//  OpmSDK
//
//  Created by Wennan on 2025/6/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, SDKEnvironmentType) {
    SDKEnvironmentTypeTest,
    SDKEnvironmentTypeProduction
};

@interface OpmSDKEnvironment : NSObject

@property (nonatomic, assign, readonly) SDKEnvironmentType type;

@property (nonatomic, strong, readonly) NSURL *baseURL;

+ (instancetype)testEnvironment;

+ (instancetype)productionEnvironment;

@end

NS_ASSUME_NONNULL_END
