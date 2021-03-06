/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOSearchRequester : NSObject {
	NSMapTable *_pendingSearches;	// 4 = 0x4
	NSLock *_pendingSearchesLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedSearchRequester;	// 0x34539391
- (id)init;	// 0x34539405
- (void)cancelSearch:(id)search;	// 0x34539d31
- (void)completions:(id)completions timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x345395dd
- (void)dealloc;	// 0x345394e5
- (void)registerProvider:(Class)provider;	// 0x34539de5
- (void)search:(id)search finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x3453955d
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x34539619
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error isCompletions:(BOOL)completions;	// 0x34539655
- (void)search:(id)search useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x3453959d
@end

