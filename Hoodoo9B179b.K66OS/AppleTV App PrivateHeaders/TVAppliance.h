/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "TVAppliance.h"


__attribute__((visibility("hidden")))
@interface TVAppliance : XXUnknownSuperclass {
	BOOL _favoritesCategoryEnabled;	// 8 = 0x8
}
+ (void)initialize;	// 0x69a75
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x69b91
- (id)applianceController;	// 0x6a03d
- (id)applianceSpecificControllerForIdentifier:(id)identifier args:(id)args;	// 0x69f05
- (void)dealloc;	// 0x69c71
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x6a101
- (id)loadCategories;	// 0x69cdd
- (id)localizedSearchTitle;	// 0x6a3f5
- (int)noContentBRError;	// 0x6a44d
- (int)noRemoteContentBRError;	// 0x6a455
- (id)topShelfController;	// 0x6a005
@end

@interface TVAppliance (Private)
- (void)_favoriteAdded:(id)added;	// 0x6a45d
- (void)_favoriteRemoved:(id)removed;	// 0x6a5a9
- (id)_favoritesController;	// 0x6a80d
- (id)_myTVShowsController;	// 0x6a6f5
- (id)_sharedTVShowsController;	// 0x6a8c5
@end
