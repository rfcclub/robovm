/*
 * Copyright (C) 2014 Trillian Mobile AB
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.robovm.apple.healthkit;

/*<imports>*/
import java.io.*;
import java.nio.*;
import java.util.*;
import org.robovm.objc.*;
import org.robovm.objc.annotation.*;
import org.robovm.objc.block.*;
import org.robovm.rt.*;
import org.robovm.rt.bro.*;
import org.robovm.rt.bro.annotation.*;
import org.robovm.rt.bro.ptr.*;
import org.robovm.apple.foundation.*;
/*</imports>*/

/*<javadoc>*/
/**
 * @since Available in iOS 8.0 and later.
 */
/*</javadoc>*/
/*<annotations>*/@Library("HealthKit") @NativeClass/*</annotations>*/
/*<visibility>*/public/*</visibility>*/ class /*<name>*/HKCorrelationQuery/*</name>*/ 
    extends /*<extends>*/HKQuery/*</extends>*/ 
    /*<implements>*//*</implements>*/ {

    /*<ptr>*/public static class HKCorrelationQueryPtr extends Ptr<HKCorrelationQuery, HKCorrelationQueryPtr> {}/*</ptr>*/
    /*<bind>*/static { ObjCRuntime.bind(HKCorrelationQuery.class); }/*</bind>*/
    /*<constants>*//*</constants>*/
    /*<constructors>*/
    public HKCorrelationQuery() {}
    protected HKCorrelationQuery(SkipInit skipInit) { super(skipInit); }
    public HKCorrelationQuery(HKCorrelationType correlationType, NSPredicate predicate, NSDictionary<HKSampleType, NSPredicate> samplePredicates, @Block VoidBlock3<HKCorrelationQuery, NSArray<HKCorrelation>, NSError> completion) { super((SkipInit) null); initObject(init(correlationType, predicate, samplePredicates, completion)); }
    /*</constructors>*/
    /*<properties>*/
    @Property(selector = "correlationType")
    public native HKCorrelationType getCorrelationType();
    @Property(selector = "samplePredicates")
    public native NSDictionary<HKSampleType, NSPredicate> getSamplePredicates();
    /*</properties>*/
    /*<members>*//*</members>*/
    /*<methods>*/
    @Method(selector = "initWithType:predicate:samplePredicates:completion:")
    protected native @Pointer long init(HKCorrelationType correlationType, NSPredicate predicate, NSDictionary<HKSampleType, NSPredicate> samplePredicates, @Block VoidBlock3<HKCorrelationQuery, NSArray<HKCorrelation>, NSError> completion);
    /*</methods>*/
}