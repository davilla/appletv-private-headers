/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class RUIYTListDataSourceAspect, RUIYTHistoryManager;

__attribute__((visibility("hidden")))
@interface RUIYTHistoryController : BRViewController {
	RUIYTHistoryManager *_historyManager;	// 100 = 0x64
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 104 = 0x68
}
- (id)initWithHistoryManager:(id)historyManager;	// 0x248fc5
- (void).cxx_destruct;	// 0x2495c9
- (void)_clearHistory;	// 0x24975d
- (void)_reloadList;	// 0x2497e1
- (id)_sections;	// 0x2495fd
- (void)controlWasActivated;	// 0x249589
- (id)identifier;	// 0x24913d
- (BOOL)isNetworkDependent;	// 0x2491cd
- (void)wasPushed;	// 0x2491d1
@end
