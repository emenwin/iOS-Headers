/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AirPortAssistant/AssistantUIViewController.h>

@interface AssistantUIViewController (private)
- (void)keyboardReturnKeySetEnabled:(_Bool)arg1;
- (id)radioNameFromBaseStation:(id)arg1;
- (void)replaceSubviewsInView:(id)arg1 newSubviews:(id)arg2 layoutOptions:(int)arg3 withAnimation:(_Bool)arg4;
- (void)handleCancelRequest:(_Bool)arg1;
- (void)setupCompleteShowPasswords:(_Bool)arg1;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (void)showUIForSetupStatus;
- (void)skipPluginAudioCabling;
- (void)continueWithSwapCabling;
- (void)continueWithGuestNetSettings;
- (void)continueWithDiagsAndUsageStats;
- (void)continueWithPPPoESettings;
- (void)skipWANPort;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmSkipWANPort;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popToRootViewControllerAnimated:(_Bool)arg1;
- (void)startSetup:(id)arg1;
- (id)newStepByStepControllerForStep:(int)arg1;
@end

