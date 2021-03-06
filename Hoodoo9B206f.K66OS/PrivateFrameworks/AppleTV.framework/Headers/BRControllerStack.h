/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray;

@interface BRControllerStack : BRControl {
@private
	NSMutableArray *_stack;	// 48 = 0x30
	NSMutableArray *_transactions;	// 52 = 0x34
	NSMutableArray *_currentStackPath;	// 56 = 0x38
	BOOL _processingTransactions;	// 60 = 0x3c
	BOOL _dumpStack;	// 61 = 0x3d
}
- (id)init;	// 0x36648d21
- (void)_addTransaction:(id)transaction;	// 0x3664994d
- (id)_checkSubstitutions:(id)substitutions;	// 0x3664b5a9
- (void)_databaseObjectModified:(id)modified;	// 0x3664b409
- (void)_performDepthLimitedCullingForController:(id)controller;	// 0x3664b211
- (void)_processPopToClassTransaction:(id)classTransaction;	// 0x3664a8a5
- (void)_processPopToLabelTransaction:(id)labelTransaction;	// 0x3664a981
- (void)_processPopToTransaction:(id)transaction;	// 0x3664a691
- (void)_processPopTransaction:(id)transaction;	// 0x3664a26d
- (void)_processPushTransaction:(id)transaction;	// 0x3664a135
- (void)_processRemoveTransaction:(id)transaction;	// 0x3664aa4d
- (void)_processReplaceAllTransaction:(id)transaction;	// 0x3664ad5d
- (void)_processReplaceControllersAboveLabelTransaction:(id)transaction;	// 0x3664afa1
- (void)_processSwapTransaction:(id)transaction;	// 0x3664a44d
- (void)_processTransactions;	// 0x36649999
- (void)_refreshControllersNotification:(id)notification;	// 0x3664b3f5
- (void)_setContent:(id)content direction:(int)direction oldTransition:(id)transition;	// 0x36649b95
- (void)_updateControllerValidity:(id)validity;	// 0x3664b4bd
- (void)_updateControllersOnlyLegacy:(BOOL)legacy;	// 0x3664b2a5
- (void)_updateStackPathForPoppingController:(id)poppingController;	// 0x3664b525
- (void)_updateStackPathForPushingController:(id)pushingController;	// 0x3664b4d1
- (id)accessibilityLabel;	// 0x36649925
- (BOOL)brEventAction:(id)action;	// 0x36649745
- (id)controllers;	// 0x36649531
- (id)controllersLabeled:(id)labeled;	// 0x3664955d
- (id)controllersOfClass:(Class)aClass;	// 0x36649641
- (int)count;	// 0x36649725
- (void)dealloc;	// 0x36648ecd
- (void)layoutSubcontrols;	// 0x3664901d
- (id)peekController;	// 0x366494c9
- (void)popController;	// 0x36649125
- (void)popToController:(id)controller;	// 0x3664917d
- (void)popToControllerOfClass:(Class)aClass;	// 0x366491e5
- (void)popToControllerWithLabel:(id)label;	// 0x36649269
- (void)pushController:(id)controller;	// 0x366490a9
- (void)removeController:(id)controller;	// 0x366492d1
- (void)replaceAllControllersWithController:(id)controller;	// 0x366493b5
- (void)replaceControllersAboveLabel:(id)label withController:(id)controller;	// 0x36649431
- (id)rootController;	// 0x366494e9
- (id)stackPathForController:(id)controller;	// 0x366497c9
- (void)swapController:(id)controller;	// 0x36649339
- (void)updateStackPathForController:(id)controller previousIdentifier:(id)identifier;	// 0x36649869
@end

