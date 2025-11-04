//
//  OPMMapDetailViewController.h
//  OpmSDK
//
//  Created by Wennan on 2025/7/3.
//

#import <UIKit/UIKit.h>
#import <OpmSDK/OpmVehicleDetailViewModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpmVehicleDetailViewController : UIViewController

@property (nonatomic, strong) OpmVehicleDetailViewModel *viewModel;

- (instancetype)initWithViewModel:(OpmVehicleDetailViewModel *)viewModel;

@end

NS_ASSUME_NONNULL_END
