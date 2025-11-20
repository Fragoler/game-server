#pragma once

namespace presenter {

    template <typename To>
    class ISerializable<To> {
        virtual To serialize() const = 0;
    }

    template <typename From>
    class IDeserializable<From> {
        virtual  can_deserialize() const = 0;
    }

}