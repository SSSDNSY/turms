/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
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

package im.turms.server.common.util;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.stream.Collector;
import java.util.stream.Collectors;

/**
 * @author James Chen
 */
public class CollectorUtil {

    private CollectorUtil() {
    }

    public static <T> Collector<T, ?, List<T>> toList(int size) {
        return Collectors.toCollection(() -> new ArrayList<>(size));
    }

    public static <T> Collector<T, ?, HashSet<T>> toSet(int size) {
        return Collectors.toCollection(() -> new HashSet<>(size));
    }

}