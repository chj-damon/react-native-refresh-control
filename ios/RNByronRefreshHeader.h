#import <UIKit/UIKit.h>

#import <React/RCTComponent.h>
#import <React/RCTScrollableProtocol.h>
#import "MJRefresh.h"

NS_ASSUME_NONNULL_BEGIN

@interface RNByronRefreshHeader : MJRefreshHeader <RCTCustomRefreshContolProtocol>

@property (nonatomic, copy) RCTDirectEventBlock onChangeState;

@end

NS_ASSUME_NONNULL_END
